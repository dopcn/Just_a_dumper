//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBaseHomePageIndex : NVBaseModel
{
    NSString *_hotName;
    long long _id;
    NSString *_icon;
    NSString *_title;
    NSString *_url;
    long long _type;
}

+ (id)metaInfo;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) long long id; // @synthesize id=_id;
@property(copy, nonatomic) NSString *hotName; // @synthesize hotName=_hotName;
- (void).cxx_destruct;

@end

