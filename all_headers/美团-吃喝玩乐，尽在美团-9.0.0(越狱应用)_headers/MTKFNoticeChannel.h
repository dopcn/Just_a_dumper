//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTIMSDKListener;

@interface MTKFNoticeChannel : NSObject
{
    id <MTIMSDKListener> _imListener;
}

@property(nonatomic) __weak id <MTIMSDKListener> imListener; // @synthesize imListener=_imListener;
- (void).cxx_destruct;
- (void)onReceiveKFNotice:(id)arg1;
- (id)initWithListener:(id)arg1;

@end

