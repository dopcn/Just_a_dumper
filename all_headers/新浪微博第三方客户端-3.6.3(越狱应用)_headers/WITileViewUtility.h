//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WITileViewUtility : NSObject
{
    _Bool _stop;
}

+ (id)sharedUtility;
@property(nonatomic) _Bool stop; // @synthesize stop=_stop;
- (void)saveTilesOfSize:(struct CGSize)arg1 forImage:(id)arg2 fileURLString:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;

@end

