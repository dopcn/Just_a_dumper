//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface KSMusicChannel : NSObject
{
    int _id;
    NSString *_name;
    NSString *_type;
    NSArray *_iconUrls;
}

@property(retain, nonatomic) NSArray *iconUrls; // @synthesize iconUrls=_iconUrls;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int id; // @synthesize id=_id;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

