//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface StateVariable : NSObject
{
    int variableType;
    int dataType;
    NSString *name;
    NSString *dataTypeString;
}

@property(readonly) NSString *dataTypeString; // @synthesize dataTypeString;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(readonly) int dataType; // @synthesize dataType;
@property int variableType; // @synthesize variableType;
- (void)copyFromStateVariable:(id)arg1;
- (void)setDataTypeString:(id)arg1;
- (void)empty;
- (void)dealloc;
- (id)init;

@end

