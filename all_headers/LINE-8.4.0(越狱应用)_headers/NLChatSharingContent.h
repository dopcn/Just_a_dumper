//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LineLocation, NSArray, NSDictionary, NSURL;

@interface NLChatSharingContent : NSObject
{
    // Error parsing type: , name: images
    // Error parsing type: , name: location
    // Error parsing type: , name: audio
    // Error parsing type: , name: music
    // Error parsing type: , name: contact
    // Error parsing type: , name: obs
    // Error parsing type: , name: objects
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSArray *objects; // @synthesize objects;
@property(nonatomic, copy) id obs; // @synthesize obs;
@property(nonatomic, copy) NSDictionary *contact; // @synthesize contact;
@property(nonatomic, copy) NSDictionary *music; // @synthesize music;
@property(nonatomic, copy) NSURL *audio; // @synthesize audio;
@property(nonatomic, retain) LineLocation *location; // @synthesize location;
@property(nonatomic, copy) NSArray *images; // @synthesize images;

@end

