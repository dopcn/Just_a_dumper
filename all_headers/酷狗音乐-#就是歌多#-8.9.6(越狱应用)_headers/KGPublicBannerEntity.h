//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KGPublicBannerEntity : NSObject
{
    long long _pid;
    long long _type;
    NSString *_title;
    NSString *_img;
    long long _special_id;
    NSString *_special_name;
    long long _slid;
    NSString *_url;
    NSString *_video_hash;
    NSString *_user_id;
    NSString *_user_name;
}

+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSString *user_name; // @synthesize user_name=_user_name;
@property(retain, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(retain, nonatomic) NSString *video_hash; // @synthesize video_hash=_video_hash;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long slid; // @synthesize slid=_slid;
@property(copy, nonatomic) NSString *special_name; // @synthesize special_name=_special_name;
@property(nonatomic) long long special_id; // @synthesize special_id=_special_id;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long pid; // @synthesize pid=_pid;
- (void).cxx_destruct;

@end

