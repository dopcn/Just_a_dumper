//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface WDSGoodsHomeScrollController : NSObject
{
    UIView *_tabView;
    double _tabViewOriginTop;
    double _lastScrollY;
}

@property(nonatomic) double lastScrollY; // @synthesize lastScrollY=_lastScrollY;
@property(nonatomic) double tabViewOriginTop; // @synthesize tabViewOriginTop=_tabViewOriginTop;
@property(nonatomic) __weak UIView *tabView; // @synthesize tabView=_tabView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (id)init;

@end

