//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPContentItem.h>

#import "ImageManagerDelegate-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface QMCarPlayContentItem : MPContentItem <ImageManagerDelegate, NSCopying>
{
}

+ (id)identifierOfChannel:(id)arg1;
+ (id)identifierOfSongInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)subTitle:(id)arg1;
- (void)setImageForArtworkWithChannel:(id)arg1;
- (void)setImageForArtworkWithSongInfo:(id)arg1;
- (void)setImageForArtworkWithName:(id)arg1;
- (void)setImageForArtwork:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)dealloc;
- (id)initWithContainerTitle:(id)arg1 withImage:(id)arg2;
- (id)initWithChannel:(id)arg1;
- (id)initWithTitle:(id)arg1 withSubTitle:(id)arg2 withImage:(id)arg3;
- (id)initWithSongInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

