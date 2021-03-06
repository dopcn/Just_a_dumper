//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface KGPublicSepcailSongEntity : NSObject <NSCoding>
{
    NSString *_filename;
    NSString *_author_cover;
    NSString *_singer_name;
    NSString *_songhash;
    NSString *_song_name;
    NSString *_album_cover;
    long long _album_id;
    long long _song_mixid;
    NSString *_cover;
}

+ (id)modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(nonatomic) long long song_mixid; // @synthesize song_mixid=_song_mixid;
@property(nonatomic) long long album_id; // @synthesize album_id=_album_id;
@property(copy, nonatomic) NSString *album_cover; // @synthesize album_cover=_album_cover;
@property(copy, nonatomic) NSString *song_name; // @synthesize song_name=_song_name;
@property(copy, nonatomic) NSString *songhash; // @synthesize songhash=_songhash;
@property(copy, nonatomic) NSString *singer_name; // @synthesize singer_name=_singer_name;
@property(copy, nonatomic) NSString *author_cover; // @synthesize author_cover=_author_cover;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

