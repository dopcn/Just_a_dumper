//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FALiveKGAVAudioSessionEventListener : NSObject
{
    int _event;
    id _listener;
    SEL _handler;
    NSMutableDictionary *_notificationsAndHandlers;
}

+ (id)instanceWithListener:(id)arg1 event:(int)arg2 handler:(SEL)arg3;
@property(retain, nonatomic) NSMutableDictionary *notificationsAndHandlers; // @synthesize notificationsAndHandlers=_notificationsAndHandlers;
@property(nonatomic) SEL handler; // @synthesize handler=_handler;
@property(nonatomic) int event; // @synthesize event=_event;
@property(nonatomic) id listener; // @synthesize listener=_listener;
- (_Bool)isEqual:(id)arg1;
- (id)initWithListener:(id)arg1 event:(int)arg2 handler:(SEL)arg3;
- (void)dealloc;

@end

