//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface FlashScreenFeedback : NSObject
{
    NSArray *_show;
    NSArray *_click;
    NSString *_step;
    NSString *_event;
    NSArray *_playEnd;
}

@property(copy, nonatomic) NSArray *playEnd; // @synthesize playEnd=_playEnd;
@property(copy, nonatomic) NSString *event; // @synthesize event=_event;
@property(copy, nonatomic) NSString *step; // @synthesize step=_step;
@property(copy, nonatomic) NSArray *click; // @synthesize click=_click;
@property(copy, nonatomic) NSArray *show; // @synthesize show=_show;
- (void)dealloc;

@end

