//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;
@protocol Optional;

@interface UGCSongListListSongSonglistModel : JSONModel
{
    NSString<Optional> *_album_title;
    long long _has_mv;
    long long _resource_type;
    NSString<Optional> *_artist_id;
    NSString<Optional> *_author;
    long long _charge;
    long long _album_no;
    long long _original;
    long long _source;
    NSString<Optional> *_title;
    long long _havehigh;
    long long _del_status;
    NSString<Optional> *_song_id;
    NSString<Optional> *_all_rate;
    long long _all_artist_id;
    long long _has_mv_mobile;
    NSString<Optional> *_ting_uid;
    NSString<Optional> *_album_id;
}

@property(copy, nonatomic) NSString<Optional> *album_id; // @synthesize album_id=_album_id;
@property(copy, nonatomic) NSString<Optional> *ting_uid; // @synthesize ting_uid=_ting_uid;
@property(nonatomic) long long has_mv_mobile; // @synthesize has_mv_mobile=_has_mv_mobile;
@property(nonatomic) long long all_artist_id; // @synthesize all_artist_id=_all_artist_id;
@property(copy, nonatomic) NSString<Optional> *all_rate; // @synthesize all_rate=_all_rate;
@property(copy, nonatomic) NSString<Optional> *song_id; // @synthesize song_id=_song_id;
@property(nonatomic) long long del_status; // @synthesize del_status=_del_status;
@property(nonatomic) long long havehigh; // @synthesize havehigh=_havehigh;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long original; // @synthesize original=_original;
@property(nonatomic) long long album_no; // @synthesize album_no=_album_no;
@property(nonatomic) long long charge; // @synthesize charge=_charge;
@property(copy, nonatomic) NSString<Optional> *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString<Optional> *artist_id; // @synthesize artist_id=_artist_id;
@property(nonatomic) long long resource_type; // @synthesize resource_type=_resource_type;
@property(nonatomic) long long has_mv; // @synthesize has_mv=_has_mv;
@property(copy, nonatomic) NSString<Optional> *album_title; // @synthesize album_title=_album_title;
- (void).cxx_destruct;

@end

