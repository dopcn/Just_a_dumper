//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ViewTypeBaseModel.h"

@class NSString;

@interface V28ugcPlaylistModel : ViewTypeBaseModel
{
    NSString *_desc;
    NSString *_name;
    NSString *_video_count;
    NSString *_vthumburl;
    NSString *_playlistid;
}

@property(retain, nonatomic) NSString *playlistid; // @synthesize playlistid=_playlistid;
@property(retain, nonatomic) NSString *vthumburl; // @synthesize vthumburl=_vthumburl;
@property(retain, nonatomic) NSString *video_count; // @synthesize video_count=_video_count;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

