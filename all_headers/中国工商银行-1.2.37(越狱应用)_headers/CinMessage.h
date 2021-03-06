//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class CinHeader, NSData, NSMutableArray;

@interface CinMessage : NSObject <NSCoding>
{
    int _messageType;
    unsigned char _method;
    NSMutableArray *_headers;
    NSMutableArray *_bodys;
    NSData *_buffer;
    CinHeader *_from;
    CinHeader *_to;
    CinHeader *_callId;
    CinHeader *_cseq;
    CinHeader *_event;
}

@property(retain, nonatomic) CinHeader *Event; // @synthesize Event=_event;
@property(retain, nonatomic) CinHeader *Cseq; // @synthesize Cseq=_cseq;
@property(retain, nonatomic) CinHeader *CallId; // @synthesize CallId=_callId;
@property(retain, nonatomic) CinHeader *To; // @synthesize To=_to;
@property(retain, nonatomic) CinHeader *From; // @synthesize From=_from;
- (void)removeBodys;
- (void)addBodyWithInnerPackage:(id)arg1;
- (void)addBodyWithStringValue:(id)arg1;
- (void)addBodyWithValue:(id)arg1;
- (void)addHeaderOfType:(int)arg1 andInt64Value:(long long)arg2;
- (void)addHeaderOfType:(int)arg1 andStringValue:(id)arg2;
- (void)addHeaderOfType:(int)arg1 andValue:(id)arg2;
- (void)addHeaderOfType:(int)arg1 andHexStringValue:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)toString;
- (_Bool)contiansHeader:(int)arg1;
- (void)removeHeader:(id)arg1;
- (_Bool)isEvent:(unsigned char)arg1;
- (_Bool)isMessageType:(int)arg1;
- (id)getBody;
- (id)getBodys;
- (id)getHeader:(int)arg1;
- (id)getHeaderWithID:(unsigned char)arg1;
- (id)getAllHeaders;
- (id)getHeaders:(int)arg1;
- (id)getKey;
- (id)getData;
- (void)addHeaders:(id)arg1;
- (void)addBody:(id)arg1;
- (void)addHeader:(id)arg1;
- (id)initWithByte:(unsigned char)arg1;
@property(readonly, nonatomic) long long PeerId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)loadFromData:(id)arg1;

@end

