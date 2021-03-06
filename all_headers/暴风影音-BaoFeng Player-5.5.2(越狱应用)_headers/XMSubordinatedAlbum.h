//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMSubordinatedAlbum : NSObject
{
    NSString *_albumTitle;
    NSString *_coverUrlLarge;
    NSString *_coverUrlMiddle;
    NSString *_coverUrlSmall;
    long long _albumId;
}

@property(nonatomic) long long albumId; // @synthesize albumId=_albumId;
@property(retain, nonatomic) NSString *coverUrlSmall; // @synthesize coverUrlSmall=_coverUrlSmall;
@property(retain, nonatomic) NSString *coverUrlMiddle; // @synthesize coverUrlMiddle=_coverUrlMiddle;
@property(retain, nonatomic) NSString *coverUrlLarge; // @synthesize coverUrlLarge=_coverUrlLarge;
@property(retain, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end

