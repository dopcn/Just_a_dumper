//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PHFetchResult, UIImage;

@interface WBPKAlbum : NSObject
{
    NSString *_albumTitle;
    unsigned long long _photoCount;
    UIImage *_photoImage;
    PHFetchResult *_fetchResult;
}

+ (id)fetchAlbumList;
@property(retain, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain, nonatomic) UIImage *photoImage; // @synthesize photoImage=_photoImage;
@property(nonatomic) unsigned long long photoCount; // @synthesize photoCount=_photoCount;
@property(retain, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
- (void).cxx_destruct;
- (unsigned long long)indexOfPhoto:(id)arg1;
- (_Bool)containsPhoto:(id)arg1;
- (id)photoAtIndex:(unsigned long long)arg1;
- (id)initWithTitle:(id)arg1 fetchResult:(id)arg2;

@end

