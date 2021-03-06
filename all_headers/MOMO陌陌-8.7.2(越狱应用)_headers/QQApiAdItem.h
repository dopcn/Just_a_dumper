//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL;

@interface QQApiAdItem : NSObject
{
    NSString *_title;
    NSString *_description;
    NSData *_imageData;
    NSURL *_target;
    int _xo;
}

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) NSData *imageData; // @dynamic imageData;
@property(retain, nonatomic) NSURL *target; // @dynamic target;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

