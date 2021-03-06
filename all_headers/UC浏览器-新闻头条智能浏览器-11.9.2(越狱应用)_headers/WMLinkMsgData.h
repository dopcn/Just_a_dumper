//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMMessage.h"

@class NSString, WMlinkMediaItem;

@interface WMLinkMsgData : WMMessage
{
    NSString *_imageURL;
    NSString *_title;
    NSString *_subTitle;
    NSString *_url;
    unsigned long long _type;
    WMlinkMediaItem *_curMediaItem;
}

@property(retain, nonatomic) WMlinkMediaItem *curMediaItem; // @synthesize curMediaItem=_curMediaItem;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;
- (void)setUrl:(id)arg1;
- (id)url;
- (void)setSubTitle:(id)arg1;
- (id)subTitle;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setImageURL:(id)arg1;
- (id)imageURL;
- (id)mediaItem;
- (_Bool)isMedia;
- (id)cellIdentifier;
- (void)dealloc;
- (id)init;

@end

