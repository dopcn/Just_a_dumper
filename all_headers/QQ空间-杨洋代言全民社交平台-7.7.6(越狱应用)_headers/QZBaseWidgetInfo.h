//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QZBaseModel.h"

@class NSString;

@interface QZBaseWidgetInfo : QZBaseModel
{
    double _expiredInterval;
    double _timestamp;
    NSString *_attachInfo;
}

@property(retain, nonatomic) NSString *attachInfo; // @synthesize attachInfo=_attachInfo;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double expiredInterval; // @synthesize expiredInterval=_expiredInterval;
- (void).cxx_destruct;
- (_Bool)isExpired;
- (_Bool)isValidated;

@end

