//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDReloadView;

@interface JDNetErrorView : UIView
{
    JDReloadView *_reloadView;
    CDUnknownBlockType _reloadCallBack;
}

@property(copy, nonatomic) CDUnknownBlockType reloadCallBack; // @synthesize reloadCallBack=_reloadCallBack;
@property(retain, nonatomic) JDReloadView *reloadView; // @synthesize reloadView=_reloadView;
- (void).cxx_destruct;
- (void)reconnect;
- (id)initWithFrame:(struct CGRect)arg1 reloadCallBack:(CDUnknownBlockType)arg2;

@end

