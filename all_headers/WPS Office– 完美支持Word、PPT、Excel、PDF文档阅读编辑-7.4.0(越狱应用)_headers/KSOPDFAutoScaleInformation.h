//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KSOPDFAutoScaleInformation : NSObject
{
    unsigned long long _state;
    unsigned long long _pageIndex;
    double _scale;
    double _modifyScale;
    double _leftRightScale;
}

@property(nonatomic) double leftRightScale; // @synthesize leftRightScale=_leftRightScale;
@property(nonatomic) double modifyScale; // @synthesize modifyScale=_modifyScale;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) double rightSpaceScale;
@property(readonly, nonatomic) double leftSpaceScale;
- (id)init;

@end

