#import <UIKit/UIKit.h>

extern "C" {
    NSString* CreateNSString(const char* string)
    {
        if (string != NULL)
            return [NSString stringWithUTF8String:string];
        else
            return [NSString stringWithUTF8String:""];
    }
    
    void handleUnityNativeAction(const char* string) {
        NSLog(@"JSON: %@", CreateNSString(string));
        
        NSData *jsonData = [CreateNSString(string) dataUsingEncoding:NSUTF8StringEncoding];
        NSError *error;
        
        NSDictionary *dict = [NSJSONSerialization JSONObjectWithData:jsonData options:0 error:&error];
        
        if(!error) {
            switch ([dict[@"action"] integerValue]) {
                case 0:
                    break;
                case 1:
                    if([dict[@"redirectUrl"] length] > 0) {
                        [[UIApplication sharedApplication] openURL: [NSURL URLWithString:dict[@"redirectUrl"]]];
                    }
                    break;
                default:
                    break;
            }
        }
        
    }
    
}
