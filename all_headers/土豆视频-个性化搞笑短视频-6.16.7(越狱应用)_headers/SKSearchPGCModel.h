//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SKBaseModel.h"

@class NSMutableArray, NSNumber, NSString;

@interface SKSearchPGCModel : SKBaseModel
{
    NSNumber *_flag;
    NSString *_PGCdescription;
    NSString *_followers;
    NSString *_home_url;
    NSString *_image_url;
    NSString *_level_url;
    NSString *_name;
    NSString *_total_vv;
    NSString *_uid;
    NSMutableArray *_videoList;
    NSMutableArray *_livevideoList;
}

@property(retain, nonatomic) NSMutableArray *livevideoList; // @synthesize livevideoList=_livevideoList;
@property(retain, nonatomic) NSMutableArray *videoList; // @synthesize videoList=_videoList;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *total_vv; // @synthesize total_vv=_total_vv;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *level_url; // @synthesize level_url=_level_url;
@property(copy, nonatomic) NSString *image_url; // @synthesize image_url=_image_url;
@property(copy, nonatomic) NSString *home_url; // @synthesize home_url=_home_url;
@property(copy, nonatomic) NSString *followers; // @synthesize followers=_followers;
@property(copy, nonatomic) NSString *PGCdescription; // @synthesize PGCdescription=_PGCdescription;
@property(retain, nonatomic) NSNumber *flag; // @synthesize flag=_flag;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

