//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface BDNCouponHomeTopmostSearchBarMenuItem : NSObject
{
    UIImage *_icon;
    NSString *_content;
    CDUnknownBlockType _callback;
    unsigned long long _badge;
}

+ (id)menuItemWithIcon:(id)arg1 content:(id)arg2 callback:(CDUnknownBlockType)arg3;
@property(nonatomic) unsigned long long badge; // @synthesize badge=_badge;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)initWithIcon:(id)arg1 content:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end

