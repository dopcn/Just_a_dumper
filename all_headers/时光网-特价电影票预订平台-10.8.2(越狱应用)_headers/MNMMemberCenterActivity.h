//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBModel.h"

@class NSNumber, NSString;

@interface MNMMemberCenterActivity : MTBModel
{
    NSNumber *_status;
    NSString *_title;
    NSString *_url;
    NSString *_describe;
    NSString *_timeDesc;
    NSString *_image;
    NSString *_statusDesc;
}

@property(copy, nonatomic) NSString *statusDesc; // @synthesize statusDesc=_statusDesc;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *timeDesc; // @synthesize timeDesc=_timeDesc;
@property(copy, nonatomic) NSString *describe; // @synthesize describe=_describe;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

