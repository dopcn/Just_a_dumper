//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface HSOffLineStatics : NSObject
{
    NSMutableArray *_sendArray;
}

+ (void)cleanUp;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *sendArray; // @synthesize sendArray=_sendArray;
- (void).cxx_destruct;
- (void)sendCatArray;
- (void)removeCatWithArray:(id)arg1;
- (id)getCatArray;
- (void)addCatItem:(id)arg1;

@end

