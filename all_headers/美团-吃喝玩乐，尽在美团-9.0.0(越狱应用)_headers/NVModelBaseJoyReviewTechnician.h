//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBaseJoyReviewTechnician : NVBaseModel
{
    long long _technicianId;
    NSString *_name;
    NSString *_yearDesc;
    NSString *_pic;
    long long _highlight;
    NSString *_title;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long highlight; // @synthesize highlight=_highlight;
@property(copy, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(copy, nonatomic) NSString *yearDesc; // @synthesize yearDesc=_yearDesc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long technicianId; // @synthesize technicianId=_technicianId;
- (void).cxx_destruct;

@end

