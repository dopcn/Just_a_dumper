//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MAYGrowingTextContainerView;

@protocol MAYGrowingTextContainerViewDelegate <NSObject>

@optional
- (void)growingContainerViewDidChangeHeight:(float)arg1;
- (void)inputViewDidHide:(MAYGrowingTextContainerView *)arg1;
- (void)inputViewWillHide:(MAYGrowingTextContainerView *)arg1;
- (void)inputViewDidShow:(MAYGrowingTextContainerView *)arg1;
- (void)inputViewWillShow:(MAYGrowingTextContainerView *)arg1;
- (_Bool)inputViewCanBecomeFirstResponder;
@end

