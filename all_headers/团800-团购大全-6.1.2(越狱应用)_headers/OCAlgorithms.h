//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OCAlgorithmDelegate;

@interface OCAlgorithms : NSObject
{
    id <OCAlgorithmDelegate> delegate;
}

+ (id)gridClusteringWithAnnotations:(id)arg1 andClusterRect:(CDStruct_c3b9c2ee)arg2;
+ (id)bubbleClusteringWithAnnotations:(id)arg1 andClusterRadius:(double)arg2;
- (void).cxx_destruct;

@end

