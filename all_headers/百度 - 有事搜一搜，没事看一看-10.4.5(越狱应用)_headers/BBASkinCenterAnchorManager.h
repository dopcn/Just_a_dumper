//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface BBASkinCenterAnchorManager : NSObject
{
    NSDictionary *_skinCenterAnchor;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *skinCenterAnchor; // @synthesize skinCenterAnchor=_skinCenterAnchor;
- (void).cxx_destruct;
- (void)deleteSkinCenterAnchor;
- (_Bool)writeSkinCenterAnchor:(id)arg1;
- (id)skinCenterAnchorFullArchivePath;
- (id)readSkinCenterAnchor;

@end

