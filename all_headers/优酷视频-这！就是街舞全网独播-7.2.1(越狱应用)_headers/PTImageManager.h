//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage;

@interface PTImageManager : NSObject
{
    UIImage *_sharedCardPlaceholderImage;
    UIImage *_sharedUserIconPlaceholderImage;
}

+ (id)sharedImage;
@property(retain, nonatomic, getter=sharedUserIconPlaceholderImage) UIImage *sharedUserIconPlaceholderImage; // @synthesize sharedUserIconPlaceholderImage=_sharedUserIconPlaceholderImage;
@property(retain, nonatomic, getter=sharedCardPlaceholderImage) UIImage *sharedCardPlaceholderImage; // @synthesize sharedCardPlaceholderImage=_sharedCardPlaceholderImage;
- (void).cxx_destruct;

@end

