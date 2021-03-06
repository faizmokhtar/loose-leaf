//
//  MMSlidingSidebarView.h
//  LooseLeaf
//
//  Created by Adam Wulf on 3/27/14.
//  Copyright (c) 2014 Milestone Made, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MMSidebarButton.h"
#import "MMSlidingSidebarView.h"
#import "MMSlidingSidebarContainerViewDelegate.h"


@interface MMFullScreenSidebarContainingView : UIView {
    MMSlidingSidebarView* slidingSidebarView;
    __weak NSObject<MMSlidingSidebarContainerViewDelegate>* delegate;
}

@property (nonatomic, weak) NSObject<MMSlidingSidebarContainerViewDelegate>* delegate;

- (id)initWithFrame:(CGRect)frame forReferenceButtonFrame:(CGRect)buttonFrame animateFromLeft:(BOOL)fromLeft;

- (void)setReferenceButtonFrame:(CGRect)frame;

- (void)sidebarCloseButtonWasTapped;

- (BOOL)isVisible;

- (void)hide:(BOOL)animated onComplete:(void (^)(BOOL finished))onComplete;

- (void)show:(BOOL)animated;

- (UIView*)viewForBlur;

@end
