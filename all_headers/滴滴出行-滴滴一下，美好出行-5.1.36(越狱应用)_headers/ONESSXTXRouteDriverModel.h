//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ONESSXTXRouteDriverModel : NSObject
{
    _Bool _isShowStartEndPoint;
    _Bool _is3DNavigation;
    int _delayRetryCount;
    float _refreshRatio;
    float _refreshCycle;
    struct UIEdgeInsets _edgePaddingFor2DNorthOverView;
}

@property(nonatomic) float refreshCycle; // @synthesize refreshCycle=_refreshCycle;
@property(nonatomic) float refreshRatio; // @synthesize refreshRatio=_refreshRatio;
@property(nonatomic) struct UIEdgeInsets edgePaddingFor2DNorthOverView; // @synthesize edgePaddingFor2DNorthOverView=_edgePaddingFor2DNorthOverView;
@property(nonatomic) int delayRetryCount; // @synthesize delayRetryCount=_delayRetryCount;
@property(readonly, nonatomic) _Bool is3DNavigation; // @synthesize is3DNavigation=_is3DNavigation;
@property(nonatomic) _Bool isShowStartEndPoint; // @synthesize isShowStartEndPoint=_isShowStartEndPoint;

@end

