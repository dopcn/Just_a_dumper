//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface UPWorkoutAPI : NSObject
{
}

+ (void)getWorkoutTicks:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getWorkoutGraphImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deleteWorkout:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)refreshWorkout:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)postWorkout:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getWorkoutsFromStartDate:(id)arg1 toEndDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)getWorkoutsWithLimit:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;

@end

