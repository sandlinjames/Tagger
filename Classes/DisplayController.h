//
//  SettingsSheetController.h
//  SheetFromOtherNib
//
//  Created by grady player on 6/21/11.
//  Copyright 2011 Objectively Better, LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface DisplayController : NSWindowController {
@private
	IBOutlet NSWindow    *window;
	id vgmdb; // macruby Vgmdb class
	NSDictionary *albumDetails; // contains all the infomation
	
	NSString *selectedLanguage; // language of the tracks
	NSArray  *tracks; // array of tracks info
	
	NSMutableDictionary *fieldValues; // The value of the fields
	NSDictionary *fieldProperties;    // The properties of the fields and their buttons
	
	IBOutlet NSTableView *table; // table of tracks
	NSArray *languages; // for radio buttons
	
}

- (id)initWithUrl:(NSString*)url
			vgmdb:(id)vgmdbObject;

-(IBAction) changeLanguage:(NSMutableDictionary*)properties
		  buttonProperties:(NSMutableDictionary*)buttonProperties;

- (IBAction)cancelSheet:sender;
- (IBAction)confirmSheet:sender;

- (IBAction)changeTableLanguage:(id)sender;


@end
