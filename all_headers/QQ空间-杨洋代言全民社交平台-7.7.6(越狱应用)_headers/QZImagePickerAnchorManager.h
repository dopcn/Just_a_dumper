//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QZImagePickerAnchorManager : NSObject
{
}

+ (void)setGroupAnchorHUB:(id)arg1 forType:(long long)arg2;
+ (id)groupAnchorHUBDateForType:(long long)arg1;
+ (id)groupAnchorHUBForType:(long long)arg1;
+ (id)AlbumAnchorHUBDateForType:(long long)arg1;
+ (id)AlbumAnchorHUBForType:(long long)arg1;
+ (void)clearGroupAnchorHUB;
+ (void)setGroupAnchorHUB:(id)arg1;
+ (id)groupAnchorHUBDate;
+ (id)groupAnchorHUB;
+ (id)sharedAnchorManager;
- (void)assetsChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

