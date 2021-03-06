//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SWRefreshView-Protocol.h"

@class SWRefreshViewModel;

@interface SWRefreshView : UIView <SWRefreshView>
{
    SWRefreshViewModel *_sourceViewModel;
}

+ (id)footerWithRefreshingTarget:(id)arg1 action:(SEL)arg2;
+ (id)footerWithRefreshingBlock:(CDUnknownBlockType)arg1;
+ (id)headerWithRefreshingTarget:(id)arg1 action:(SEL)arg2;
+ (id)headerWithRefreshingBlock:(CDUnknownBlockType)arg1;
+ (id)newFooterRefreshingTarget:(id)arg1 action:(SEL)arg2;
+ (id)newFooterRefreshingBlock:(CDUnknownBlockType)arg1;
+ (id)newHeaderRefreshingTarget:(id)arg1 action:(SEL)arg2;
+ (id)newHeaderRefreshingBlock:(CDUnknownBlockType)arg1;
+ (Class)defaultFooterControllerClass;
+ (Class)defaultHeaderControllerClass;
+ (Class)defaultFooterViewModelClass;
+ (Class)defaultHeaderViewModelClass;
@property(retain, nonatomic) SWRefreshViewModel *sourceViewModel; // @synthesize sourceViewModel=_sourceViewModel;
- (void).cxx_destruct;
- (void)changeFromState:(long long)arg1 to:(long long)arg2;
- (void)changePullingPercent:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unbindSourceViewModel:(id)arg1;
- (void)bindSourceViewModel:(id)arg1;
- (void)dealloc;

@end

