//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView;

@interface SNChannelLayoutHolder : NSObject
{
    _Bool isDull;
    UIView *_guestView;
    struct CGPoint guestCenter;
}

@property(retain, nonatomic) UIView *guestView; // @synthesize guestView=_guestView;
@property(nonatomic) struct CGPoint guestCenter; // @synthesize guestCenter;
@property(nonatomic) _Bool isDull; // @synthesize isDull;
- (void).cxx_destruct;
- (void)letitgo;
- (void)dealloc;

@end

