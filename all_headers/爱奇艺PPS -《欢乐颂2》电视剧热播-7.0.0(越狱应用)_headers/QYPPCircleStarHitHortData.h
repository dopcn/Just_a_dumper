//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPJsonData.h"

@class NSString, QYPPCircleStarHitHortPropInfo, QYPPCircleStarHitHortResultData;
@protocol Optional;

@interface QYPPCircleStarHitHortData : QYPPJsonData
{
    NSString<Optional> *_starName;
    QYPPCircleStarHitHortResultData<Optional> *_result;
    QYPPCircleStarHitHortPropInfo<Optional> *_propInfo;
}

+ (id)keyMapper;
@property(retain, nonatomic) QYPPCircleStarHitHortPropInfo<Optional> *propInfo; // @synthesize propInfo=_propInfo;
@property(retain, nonatomic) QYPPCircleStarHitHortResultData<Optional> *result; // @synthesize result=_result;
@property(retain, nonatomic) NSString<Optional> *starName; // @synthesize starName=_starName;
- (void).cxx_destruct;

@end

