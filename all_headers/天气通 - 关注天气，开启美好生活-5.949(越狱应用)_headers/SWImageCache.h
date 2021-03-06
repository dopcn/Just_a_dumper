//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SWCache;

@interface SWImageCache : NSObject
{
    SWCache *_memoryCache;
}

+ (id)roundedImageWithSize:(struct CGSize)arg1 color:(id)arg2 radius:(double)arg3;
+ (id)imageColorWithHex:(unsigned int)arg1;
+ (id)imageNamed:(id)arg1;
+ (id)sharedImageCache;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addImageTo_memoryCache:(id)arg1 withKey:(id)arg2;
- (void)removeImageWithKey:(id)arg1;
- (_Bool)hasImageWithKey:(id)arg1;
- (id)imageForKey:(id)arg1;
- (id)_imageColorWithHex:(unsigned int)arg1;
- (id)roundedImageWithSize:(struct CGSize)arg1 color:(id)arg2 radius:(double)arg3;
- (id)imageForName:(id)arg1;
- (id)init;

@end

