//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WMMsgDataProtocol-Protocol.h"

@class NSDate, NSString;
@protocol WMMediaDataProtocol;

@interface WMMessage : NSObject <WMMsgDataProtocol>
{
    _Bool _isMedia;
    _Bool _isOutgoing;
    _Bool _isRichText;
    NSString *_messageId;
    NSString *_senderDisplayName;
    NSDate *_date;
    NSString *_text;
    unsigned long long _messageHash;
    NSString *_avatarUrl;
    id <WMMediaDataProtocol> _mediaItem;
    unsigned long long _layoutType;
    unsigned long long _accessoryViewType;
    NSString *_cellIdentifier;
}

@property(retain, nonatomic) NSString *cellIdentifier; // @synthesize cellIdentifier=_cellIdentifier;
@property(nonatomic) unsigned long long accessoryViewType; // @synthesize accessoryViewType=_accessoryViewType;
@property(nonatomic) unsigned long long layoutType; // @synthesize layoutType=_layoutType;
@property(retain, nonatomic) id <WMMediaDataProtocol> mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic) _Bool isRichText; // @synthesize isRichText=_isRichText;
@property(nonatomic) _Bool isOutgoing; // @synthesize isOutgoing=_isOutgoing;
@property(nonatomic) _Bool isMedia; // @synthesize isMedia=_isMedia;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(nonatomic) unsigned long long messageHash; // @synthesize messageHash=_messageHash;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *senderDisplayName; // @synthesize senderDisplayName=_senderDisplayName;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithDate:(id)arg1 text:(id)arg2 isOutgoing:(_Bool)arg3 accessoryViewType:(unsigned long long)arg4;
- (id)initWithMessageId:(id)arg1 senderDisplayName:(id)arg2 date:(id)arg3 mediaItem:(id)arg4 avatarUrl:(id)arg5 isOutgoing:(_Bool)arg6 accessoryViewType:(unsigned long long)arg7;
- (id)initWithMessageId:(id)arg1 senderDisplayName:(id)arg2 date:(id)arg3 text:(id)arg4 isRichText:(_Bool)arg5 avatarUrl:(id)arg6 isOutgoing:(_Bool)arg7 accessoryViewType:(unsigned long long)arg8;
- (id)initWithMessageId:(id)arg1 senderDisplayName:(id)arg2 date:(id)arg3 avatarUrl:(id)arg4 isOutgoing:(_Bool)arg5 accessoryViewType:(unsigned long long)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *imageFormat;
@property(nonatomic) double imageHeight;
@property(copy, nonatomic) NSString *imageURL;
@property(nonatomic) double imageWidth;
@property(copy, nonatomic) NSString *subTitle;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) unsigned long long type;
@property(copy, nonatomic) NSString *url;

@end

