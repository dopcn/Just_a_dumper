//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PacketFilter;

@interface PacketObserver : NSObject
{
    id target;
    SEL selector;
    PacketFilter *filter;
}

+ (id)observerWithTarget:(id)arg1 selector:(SEL)arg2 filter:(id)arg3;
@property(retain, nonatomic) PacketFilter *filter; // @synthesize filter;
@property(nonatomic) SEL selector; // @synthesize selector;
@property(nonatomic) id target; // @synthesize target;
- (id)description;
- (_Bool)matchPacket:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 filter:(id)arg3;

@end

