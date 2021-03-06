//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UITabBarController;
@protocol JDYTabbarInjectorViewDelegate;

@interface JDYTabbarInjectorView : UIView
{
    _Bool isChanged;
    id <JDYTabbarInjectorViewDelegate> _delegate;
    UIView *_refferView;
    unsigned long long _index;
    UITabBarController *_tabbarController;
}

+ (id)makeInjectionToTabbarController:(id)arg1 atIndex:(unsigned long long)arg2 withReferenceView:(id)arg3 longProcessEnable:(_Bool)arg4 doubleTapEnable:(_Bool)arg5 delegate:(id)arg6;
@property(nonatomic) __weak UITabBarController *tabbarController; // @synthesize tabbarController=_tabbarController;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) UIView *refferView; // @synthesize refferView=_refferView;
@property(nonatomic) __weak id <JDYTabbarInjectorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)processDoubleTap:(id)arg1;
- (void)processTap:(id)arg1;
- (void)processLongPress:(id)arg1;
- (void)selectTabbarController;

@end

