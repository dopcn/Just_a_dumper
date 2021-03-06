//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDBasicData.h"

@class NSString;

@interface AudioTrackData : BDBasicData
{
    _Bool _can_download;
    int _track_id;
    int _category_id;
    int _duration;
    int _favorite_count;
    int _comment_count;
    int _download_count;
    int _play_size_32;
    int _play_size_64;
    int _play_size_64_m4a;
    int _play_size_24_m4a;
    int _play_size_amr;
    int _download_size;
    int _order_num;
    NSString *_kind;
    NSString *_track_title;
    NSString *_track_tags;
    NSString *_track_intro;
    NSString *_cover_url_small;
    NSString *_cover_url_middle;
    NSString *_cover_url_large;
    NSString *_play_count;
    NSString *_play_url_32;
    NSString *_play_url_64;
    NSString *_play_url_64_m4a;
    NSString *_play_url_24_m4a;
    NSString *_play_url_amr;
    NSString *_download_url;
    double _updated_at;
    double _created_at;
}

+ (id)description4timestamp:(double)arg1;
+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)jsonMapperDic;
+ (id)keyMapper;
@property(nonatomic) int order_num; // @synthesize order_num=_order_num;
@property(nonatomic) double created_at; // @synthesize created_at=_created_at;
@property(nonatomic) double updated_at; // @synthesize updated_at=_updated_at;
@property(nonatomic) int download_size; // @synthesize download_size=_download_size;
@property(copy, nonatomic) NSString *download_url; // @synthesize download_url=_download_url;
@property(nonatomic) _Bool can_download; // @synthesize can_download=_can_download;
@property(nonatomic) int play_size_amr; // @synthesize play_size_amr=_play_size_amr;
@property(copy, nonatomic) NSString *play_url_amr; // @synthesize play_url_amr=_play_url_amr;
@property(nonatomic) int play_size_24_m4a; // @synthesize play_size_24_m4a=_play_size_24_m4a;
@property(copy, nonatomic) NSString *play_url_24_m4a; // @synthesize play_url_24_m4a=_play_url_24_m4a;
@property(nonatomic) int play_size_64_m4a; // @synthesize play_size_64_m4a=_play_size_64_m4a;
@property(copy, nonatomic) NSString *play_url_64_m4a; // @synthesize play_url_64_m4a=_play_url_64_m4a;
@property(nonatomic) int play_size_64; // @synthesize play_size_64=_play_size_64;
@property(copy, nonatomic) NSString *play_url_64; // @synthesize play_url_64=_play_url_64;
@property(nonatomic) int play_size_32; // @synthesize play_size_32=_play_size_32;
@property(copy, nonatomic) NSString *play_url_32; // @synthesize play_url_32=_play_url_32;
@property(nonatomic) int download_count; // @synthesize download_count=_download_count;
@property(nonatomic) int comment_count; // @synthesize comment_count=_comment_count;
@property(nonatomic) int favorite_count; // @synthesize favorite_count=_favorite_count;
@property(retain, nonatomic) NSString *play_count; // @synthesize play_count=_play_count;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *cover_url_large; // @synthesize cover_url_large=_cover_url_large;
@property(copy, nonatomic) NSString *cover_url_middle; // @synthesize cover_url_middle=_cover_url_middle;
@property(copy, nonatomic) NSString *cover_url_small; // @synthesize cover_url_small=_cover_url_small;
@property(copy, nonatomic) NSString *track_intro; // @synthesize track_intro=_track_intro;
@property(copy, nonatomic) NSString *track_tags; // @synthesize track_tags=_track_tags;
@property(copy, nonatomic) NSString *track_title; // @synthesize track_title=_track_title;
@property(nonatomic) int category_id; // @synthesize category_id=_category_id;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(nonatomic) int track_id; // @synthesize track_id=_track_id;
- (void).cxx_destruct;
- (id)description4updated;
- (id)description4created;
- (_Bool)isEqual:(id)arg1;
- (id)preferred_play_url;
- (void)reportClick;

@end

