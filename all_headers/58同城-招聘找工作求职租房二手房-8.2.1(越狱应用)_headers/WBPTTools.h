//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBPTTools : NSObject
{
}

+ (id)resizeImageURL:(id)arg1 width:(long long)arg2 height:(long long)arg3;
+ (id)formatNumber:(long long)arg1;
+ (id)formatInterval:(long long)arg1;
+ (id)formateDuration:(id)arg1;
+ (void)dismissKeyboard;
+ (id)loadNibViewOfClass:(Class)arg1;
+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)string:(id)arg1 forEmptyString:(id)arg2;
+ (_Bool)isEmptyString:(id)arg1;
+ (id)fullImageNameForName:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (_Bool)createDirectoryIfNecessaryAtPath:(id)arg1;
+ (id)pathForTemp;
+ (id)pathForApplicationRoot;

@end

