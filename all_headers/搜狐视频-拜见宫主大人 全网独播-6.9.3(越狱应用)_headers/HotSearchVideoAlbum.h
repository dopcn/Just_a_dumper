//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VideoAlbum.h"

@class NSString;

@interface HotSearchVideoAlbum : VideoAlbum
{
    NSString *_hotkey;
    NSString *_recommend;
    long long _autoPlay;
    long long _hotTrend;
}

@property(nonatomic) long long hotTrend; // @synthesize hotTrend=_hotTrend;
@property(nonatomic) long long autoPlay; // @synthesize autoPlay=_autoPlay;
@property(copy, nonatomic) NSString *recommend; // @synthesize recommend=_recommend;
@property(copy, nonatomic) NSString *hotkey; // @synthesize hotkey=_hotkey;
- (void).cxx_destruct;
- (void)updateWithAlbumInfoJSONDictionary:(id)arg1;
- (id)initWithAlbumInfoJSONDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

@end

