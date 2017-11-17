//
//  RimsPageViewController.swift
//  HotRimsAR
//
//  Created by Przemysław Kuzia on 27.11.2016.
//  Copyright © 2016 Iterators Mobile. All rights reserved.
//

import UIKit

class RimsPageViewController: UIPageViewController {
    
    let rimsPageViewModel = RimsPageViewModel()
    
    // MARK: View lifecycle
    
    override func viewDidLoad() {
        super.viewDidLoad()
        initUI()
    }
    
    func initUI() {
        dataSource = self
    }
    
    override func viewDidLayoutSubviews() {
        super.viewDidLayoutSubviews()
        
        if let scrollView = view.subviews.filter({ $0 is UIScrollView }).first,
            let pageControl = view.subviews.filter({ $0 is UIPageControl }).first {
            scrollView.frame = view.bounds
            view.bringSubview(toFront:pageControl)
        }
    }
    
    func initPageView() {
        if let rimData = rimsPageViewModel.rimsData, rimData.count > 0 {
            self.setViewControllers([getViewControllerAtIndex(index: 0)] as [UIViewController], direction: UIPageViewControllerNavigationDirection.forward, animated: false, completion: nil)
        } else {

        }
    }
}

// MARK: UIPageViewControllerDataSource

extension RimsPageViewController: UIPageViewControllerDataSource {
    
    func pageViewController(_ pageViewController: UIPageViewController, viewControllerBefore viewController: UIViewController) -> UIViewController? {
        
        if let rimCardViewController = viewController as? RimCardViewController {
            
            let index = rimCardViewController.pageIndex
            
            if index == 0 {
                return nil
            } else {
                return getViewControllerAtIndex(index: index - 1)
            }
        }
        return nil
    }
    
    func pageViewController(_ pageViewController: UIPageViewController, viewControllerAfter viewController: UIViewController) -> UIViewController? {
        
        if let rimCardViewController = viewController as? RimCardViewController {
            
            let index = rimCardViewController.pageIndex
            
            if index + 1 == rimsPageViewModel.rimsData?.count {
                return nil
            } else {
                return getViewControllerAtIndex(index: index + 1)
            }
        }
        
        return nil
    }
  
    func presentationCount(for pageViewController: UIPageViewController) -> Int {
        if let rimsCount = rimsPageViewModel.rimsData?.count {
            return rimsCount
        } else {
            return 0
        }
    }
    
    func presentationIndex(for pageViewController: UIPageViewController) -> Int {
        return 0
    }
    
    func getViewControllerAtIndex(index: NSInteger) -> RimCardViewController {
       
        let storyboard = UIStoryboard(storyboard: .Main)
        let rimCardViewController: RimCardViewController = storyboard.instantiateViewController()
        
        rimCardViewController.pageIndex = index
        
        if let rimsData = rimsPageViewModel.rimsData, rimsData.count - 1 >= index {
            rimCardViewController.rimObject = rimsData[index]
        }
        
        return rimCardViewController
    }
}
