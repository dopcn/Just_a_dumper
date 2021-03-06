//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DMuClockDelegate-Protocol.h"
#import "DMuDispatcherDelegate-Protocol.h"

@class DMuCanvas, DMuClock, DMuDispatcher, NSArray, NSString;
@protocol DMuRenderDelegate, DMuRenderPolicyPotocol;

@interface DMuRender : NSObject <DMuClockDelegate, DMuDispatcherDelegate>
{
    id <DMuRenderDelegate> _delegate;
    id <DMuRenderPolicyPotocol> _policy;
    DMuCanvas *_canvasView;
    double _speed;
    DMuClock *_clock;
    DMuDispatcher *_dispatcher;
    double _lastTimeInterval;
}

@property(nonatomic) double lastTimeInterval; // @synthesize lastTimeInterval=_lastTimeInterval;
@property(retain, nonatomic) DMuDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) DMuClock *clock; // @synthesize clock=_clock;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(retain, nonatomic) DMuCanvas *canvasView; // @synthesize canvasView=_canvasView;
@property(nonatomic) id <DMuRenderPolicyPotocol> policy; // @synthesize policy=_policy;
@property(nonatomic) id <DMuRenderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dispatcher:(id)arg1 willDeactiveSprite:(id)arg2;
- (void)dispatcher:(id)arg1 willActiveSprite:(id)arg2;
- (_Bool)dispatcher:(id)arg1 shouldDeActiveSprite:(id)arg2;
- (_Bool)dispatcher:(id)arg1 shouldActiveSprite:(id)arg2;
- (void)clock:(id)arg1 didTimeUpdated:(double)arg2;
@property(readonly, nonatomic) double clockTime;
@property(readonly, copy, nonatomic) NSArray *visiableSprites; // @dynamic visiableSprites;
- (void)pause;
- (void)stop;
- (void)start;
- (void)enqueue:(id)arg1;
- (id)dequeueReusableSpriteWithIdentifier:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

