//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPBMessage.h"

@class NSMutableArray;

@interface UBTPackage : CPBMessage
{
    NSMutableArray *_partArray;
}

+ (id)message;
@property(retain, nonatomic) NSMutableArray *partArray; // @synthesize partArray=_partArray;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;

@end

