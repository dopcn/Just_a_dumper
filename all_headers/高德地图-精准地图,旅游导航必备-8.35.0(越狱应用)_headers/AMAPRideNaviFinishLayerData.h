//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AMAPRideNaviFinishLayerData : NSObject
{
    NSArray *_passedPoints;
    struct ANPoint _startPoint;
    struct ANPoint _endPoint;
    struct ANPoint _currentPoint;
}

@property(retain, nonatomic) NSArray *passedPoints; // @synthesize passedPoints=_passedPoints;
@property(nonatomic) struct ANPoint currentPoint; // @synthesize currentPoint=_currentPoint;
@property(nonatomic) struct ANPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct ANPoint startPoint; // @synthesize startPoint=_startPoint;
- (void).cxx_destruct;

@end

