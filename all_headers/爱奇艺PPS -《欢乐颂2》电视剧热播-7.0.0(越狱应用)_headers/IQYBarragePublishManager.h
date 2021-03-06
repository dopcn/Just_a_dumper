//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataLoadManager.h"

@class NSString;

@interface IQYBarragePublishManager : DataLoadManager
{
    NSString *_authcookie;
    NSString *_udid;
    NSString *_tvid;
    NSString *_content;
    NSString *_addTime;
    NSString *_playTime;
    NSString *_appid;
    NSString *_font;
    NSString *_color;
    NSString *_opacity;
    NSString *_position;
    NSString *_background;
    NSString *_replyUid;
    NSString *_replyUdid;
    NSString *_deviceid;
    NSString *_longitude;
    NSString *_latitude;
}

@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *deviceid; // @synthesize deviceid=_deviceid;
@property(retain, nonatomic) NSString *replyUdid; // @synthesize replyUdid=_replyUdid;
@property(retain, nonatomic) NSString *replyUid; // @synthesize replyUid=_replyUid;
@property(retain, nonatomic) NSString *background; // @synthesize background=_background;
@property(retain, nonatomic) NSString *position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *opacity; // @synthesize opacity=_opacity;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSString *playTime; // @synthesize playTime=_playTime;
@property(retain, nonatomic) NSString *addTime; // @synthesize addTime=_addTime;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *tvid; // @synthesize tvid=_tvid;
@property(retain, nonatomic) NSString *udid; // @synthesize udid=_udid;
@property(retain, nonatomic) NSString *authcookie; // @synthesize authcookie=_authcookie;
- (void).cxx_destruct;
- (_Bool)parse:(id)arg1;
- (id)keyForCache;
- (id)urlStl;
- (id)init;

@end

