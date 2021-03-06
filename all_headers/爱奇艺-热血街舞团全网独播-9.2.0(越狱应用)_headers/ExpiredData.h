//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;

@interface ExpiredData : NSObject
{
    _Bool _alwaysValid;
    _Bool _isReadInFile;
    id _jsonObj;
    NSDate *_startingDate;
    double _validSeconds;
    id _parsedData;
}

@property(nonatomic) _Bool isReadInFile; // @synthesize isReadInFile=_isReadInFile;
@property(retain, nonatomic) id parsedData; // @synthesize parsedData=_parsedData;
@property(nonatomic) _Bool alwaysValid; // @synthesize alwaysValid=_alwaysValid;
@property(nonatomic) double validSeconds; // @synthesize validSeconds=_validSeconds;
@property(copy, nonatomic) NSDate *startingDate; // @synthesize startingDate=_startingDate;
@property(retain, nonatomic) id jsonObj; // @synthesize jsonObj=_jsonObj;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

