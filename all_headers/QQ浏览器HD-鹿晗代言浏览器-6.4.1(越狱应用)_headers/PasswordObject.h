//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PasswordObject : NSObject
{
    NSString *_urlString;
    NSString *_formID;
    NSArray *_inputsArray;
}

@property(retain, nonatomic) NSArray *inputsArray; // @synthesize inputsArray=_inputsArray;
@property(copy, nonatomic) NSString *formID; // @synthesize formID=_formID;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;

@end

