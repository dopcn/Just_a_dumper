//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface XAdVersion : NSObject
{
    int _MajorVersion;
    int _MinorVersion;
    int _MicroVersion;
    int _BuildNumber;
}

@property(nonatomic) int BuildNumber; // @synthesize BuildNumber=_BuildNumber;
@property(nonatomic) int MicroVersion; // @synthesize MicroVersion=_MicroVersion;
@property(nonatomic) int MinorVersion; // @synthesize MinorVersion=_MinorVersion;
@property(nonatomic) int MajorVersion; // @synthesize MajorVersion=_MajorVersion;
- (id)description;
- (int)compareTo:(id)arg1;
- (id)initWithVerString:(id)arg1;

@end

